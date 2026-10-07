
void FUN_10070c050(uint *param_1,int param_2,undefined8 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 8),(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 0x18),(pthread_condattr_t *)0x0);
  _pthread_mutex_init((pthread_mutex_t *)(param_1 + 0x2e),(pthread_mutexattr_t *)0x0);
  _pthread_cond_init((pthread_cond_t *)(param_1 + 0x3e),(pthread_condattr_t *)0x0);
  param_1[0x4a] = 0;
  param_1[0x5a] = 0;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  if (param_2 != 0) {
    uVar2 = FUN_1007da300("devices.hdd.aio_threads",0x10);
    *param_1 = uVar2;
    if (0x20 < uVar2) {
      *param_1 = 0x20;
      uVar2 = 0x20;
      goto LAB_10070c16f;
    }
    if (uVar2 != 0) goto LAB_10070c16f;
  }
  *param_1 = 1;
  uVar2 = 1;
LAB_10070c16f:
  if ((uVar2 != 0x10) && (2 < DAT_1011b55f8)) {
    FUN_1008e3970("","AbstractFile",3,"AioThreadedWorker configured to use %u threads");
  }
  iVar3 = FUN_1007da300("devices.hdd.max_req_size",0x400);
  param_1[0x9d] = iVar3 << 10;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(code **)(param_1 + 0x54) = FUN_10070c240;
  uVar1 = FUN_1007d8a00(param_1 + 0x52,0);
  *(undefined1 *)(param_1 + 0x9c) = uVar1;
  *(undefined8 *)(param_1 + 0x9e) = param_3;
  return;
}

