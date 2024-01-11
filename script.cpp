
#include "script.h"
#include <map>

const std::map<uint32_t, float> expressions = {
	{36277, 0.2f},
	{33485, 0.3f},
	{41478, 1.0f},
	{27779, 1.0f},
	{49787, 0.1f},
	{46032, 1.0f},
	{8420, 0.8f},
	{64834, 0.3f},
	{42067, 0.6f}
};

void ScriptMain()
{
	while (true)
	{
		Ped player = PLAYER::PLAYER_PED_ID();
		
		for (const auto& it : expressions)
		{
			PED::_SET_CHAR_EXPRESSION(player, it.first, it.second);
		}
		
		PED::_UPDATE_PED_VARIATION(player, true, true, true, true, true);

		WAIT(1000);
	}
}