
undefined8 FUN_1002b49a0(long *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",1,"[%s] monitor not ready after resume",param_1[3]);
    }
  }
  else {
    DAT_1011c4a90 = *(undefined4 *)(*(long *)(DAT_1011c3698 + 0x1938) + 0x319a0);
    LOCK();
    UNLOCK();
    FUN_100430030(*(undefined8 *)(DAT_1011c3698 + 0xf0));
  }
  return 0;
}

