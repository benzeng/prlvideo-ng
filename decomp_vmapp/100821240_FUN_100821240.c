
void FUN_100821240(undefined4 param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_50;
  int local_4c;
  void *local_48;
  undefined4 local_40 [2];
  code *local_38;
  undefined4 *local_30;
  
  local_50 = param_1;
  lVar1 = FUN_100885f80(DAT_1011c06d0);
  local_48 = (void *)FUN_10081ddd0(lVar1 * 8,"o_names.c",0x13a);
  if (local_48 != (void *)0x0) {
    local_4c = 0;
    local_38 = FUN_100821310;
    local_30 = &local_50;
    local_40[0] = param_1;
    FUN_100885f10(DAT_1011c06d0,FUN_100821220,local_40);
    _qsort(local_48,(long)local_4c,8,(int *)FUN_100821330);
    lVar1 = 0;
    if (0 < local_4c) {
      do {
        (*param_2)(*(undefined8 *)((long)local_48 + lVar1 * 8),param_3);
        lVar1 = lVar1 + 1;
      } while (lVar1 < local_4c);
    }
    FUN_10081e1a0(local_48);
  }
  return;
}

