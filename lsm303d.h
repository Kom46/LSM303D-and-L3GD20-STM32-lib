#ifndef LSM303D_H_
#define LSM303D_H_

#ifndef LSM303D_I2C_INTERFACE
#if defined USE_HAL_DRIVER
extern I2C_HandleTypeDef hi2c3;
#define LSM303D_I2C_INTERFACE hi2c3
#endif
#endif

#define READER_ADDR(__ADDR__) ((__ADDR__) | 0x01)
#define WRITER_ADDR(__ADDR__) ((__ADDR__) & 0xfe)

#define LSM303_ACCEL_ADDR 0x32
#define LSM303_MAGNETOMETR_ADDR 0x3c

#endif /* LSM303D_H_ */
