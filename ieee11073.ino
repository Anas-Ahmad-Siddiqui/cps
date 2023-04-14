float data[8]; // assume 32 bytes of floating point data

void encode_ieee11073_float(uint8_t *buffer, float value)
{
    uint32_t temp = *(uint32_t *)&value;
    buffer[0] = temp & 0xFF;
    buffer[1] = (temp >> 8) & 0xFF;
    buffer[2] = (temp >> 16) & 0xFF;
    buffer[3] = (temp >> 24) & 0xFF;
}

void setup()
{
    Serial.begin(9600); // initialize serial communication
}

void loop()
{
    for (int i = 0; i < 8; i++)
    {
        uint8_t buffer[4];
        encode_ieee11073_float(buffer, data[i]); // encode each float into IEEE11073 format
        Serial.write(buffer, 4);                 // send the encoded float over serial
    }
}