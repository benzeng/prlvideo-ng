
undefined8 FUN_10051e790(long param_1,long param_2)

{
  long lVar1;
  double local_38;
  long local_30;
  
  if (*(int *)(param_2 + 8) == 0x9111) {
    if (*(short *)(param_2 + 0x16) == 0) {
      return 0xf0000003;
    }
    lVar1 = FUN_1002a6120(param_2,0,1);
    if (lVar1 == 0) {
      return 0xf0000003;
    }
    if (*(uint *)(lVar1 + 8) < 8) {
      return 0xf0000009;
    }
    local_30 = param_1 + 0x40;
    FUN_1007eaef0();
    local_38 = *(double *)(param_1 + 0x38);
    if (0.0 <= local_38) {
      *(undefined8 *)(param_1 + 0x38) = 0xbff0000000000000;
      FUN_1007eaf10(&local_30);
      FUN_1002a5a50(lVar1,0,&local_38,8);
      FUN_1007eaf10(&local_30);
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x80) = param_2;
    FUN_1007eaf10(&local_30);
  }
  else {
    if (*(int *)(param_2 + 8) != 0x9110) {
      return 0xffffffff;
    }
    LOCK();
    lVar1 = *(long *)(param_1 + 0x88);
    *(long *)(param_1 + 0x88) = param_2;
    UNLOCK();
    if (*(long **)(DAT_1011c3698 + 0x1a18) != (long *)0x0) {
      (**(code **)(**(long **)(DAT_1011c3698 + 0x1a18) + 0x28))();
    }
  }
  if (lVar1 != 0) {
    FUN_1004c07d0(param_1 + 0x10,lVar1,0xf0000024);
  }
  return 0xffffffff;
}

