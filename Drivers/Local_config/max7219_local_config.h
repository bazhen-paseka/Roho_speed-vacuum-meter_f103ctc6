/*
 * MAX7219_local_config.h
 *
 *  Created on: 2021-MAR-06
 *  11:24:00
 *      Author: Bazhen Levkovets
 */
	#ifndef MAX7219_LOCAL_CONFIG_INCLUDED_H_
	#define MAX7219_LOCAL_CONFIG_INCLUDED_H_
/*
**************************************************************************
*								INCLUDE FILES
**************************************************************************
*/

/*
**************************************************************************
*								    DEFINES
**************************************************************************
*/

	#define 	MAX7219_QNT				2
	#define 	LINE_IN_PANEL			8

	#define 	BYTE_IN_SPI_PACKAGE		2
	#define 	BYTE4_IN_SPI_PACKAGE	4

	#define		WRITE_STROB_DELAY		10
	#define 	SPI_PACKAGE_TIMEOUT		20

/*
**************************************************************************
*								     END
**************************************************************************
*/

#endif /* MAX7219_LOCAL_CONFIG_INCLUDED_H_ */
