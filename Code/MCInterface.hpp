#ifndef __MC_INTERFACE_H__
#define __MC_INTERFACE_H__

#include<iostream>
// Used for including fixed integer types
#include<cstdint>

using namespace std;

class MC_INTERFACE_CLASS {
	// Define variables
	public:

	// Define functions
	public:
		// Define overloaded function
		// Set register
		uint8_t set_reg(uint8_t ui8Reg, int8_t i8RegVal);
		uint8_t set_reg(uint8_t ui8Reg, uint8_t ui8RegVal);
		uint8_t set_reg(uint8_t ui8Reg, int16_t i16RegVal);
		uint8_t set_reg(uint8_t ui8Reg, uint16_t ui16RegVal);
		uint8_t set_reg(uint8_t ui8Reg, int32_t i32RegVal);
		uint8_t set_reg(uint8_t ui8Reg, uint32_t ui32RegVal);

		// Get register
		uint8_t get_reg(uint8_t ui8Reg, int8_t *i8RegVal);
		uint8_t get_reg(uint8_t ui8Reg, uint8_t *ui8RegVal);
		uint8_t get_reg(uint8_t ui8Reg, int16_t *i16RegVal);
		uint8_t get_reg(uint8_t ui8Reg, uint16_t *ui16RegVal);
		uint8_t get_reg(uint8_t ui8Reg, int32_t *i32RegVal);
		uint8_t get_reg(uint8_t ui8Reg, uint32_t *ui32RegVal);

		uint8_t execute_command(uint8_t ui8Command);

		uint8_t get_board_info(uint8_t *pui8Buffer, uint8_t ui8BuffSize);

		uint8_t set_ramp_speed(int32_t i32FinalSpeed, uint16_t ui16DurationMs);

		uint8_t set_current_reference(int16_t i16IqRef, int16_t i16IdRef);

		uint8_t get_firmware_version(uint8_t *pui8Buffer, uint8_t ui8BuffSize);
		

}

#endif // __MC_INTERFACE_H__