#include "custom_f.h"

int find_sequence_index(uint8_t *data, uint32_t data_len, uint8_t *sequence, uint32_t sequence_len)
{
    if (data_len < sequence_len)
    {
        printf("Data length is less than sequence length");
        return -1;
    }
    uint8_t *tmp_sequence = (uint8_t *)malloc(sequence_len*sizeof(uint8_t));

    if (tmp_sequence == NULL)
    {
        printf("Memory allocation failed");
        return -1;
    }

    for (int i = 0; i < (data_len - sequence_len); i++)
    {
        memcpy(tmp_sequence, &data[i], sequence_len*sizeof(uint8_t));

        if (memcmp(tmp_sequence, sequence, sequence_len) == 0)
        {
            return i;
        }
    }

    return -1;
}