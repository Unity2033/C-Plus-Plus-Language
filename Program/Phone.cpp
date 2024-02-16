#include "Phone.h"

int Phone::GetVolume()
{
    return volume;
}

void Phone::SetVolume(int volume)
{
    if (volume >= 100)
    {
        return;
    }

    this->volume = volume;
}
