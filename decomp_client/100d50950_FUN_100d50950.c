
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_100d50950(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  QArrayData *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined1 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  _DAT_1023188bc = 0;
  _DAT_1023188b8 = 0;
  local_a0 = 0xff;
  local_9c = 0;
  local_98 = 0;
  local_90._8_4_ = (int)PTR_shared_null_1021e1288;
  local_90._0_8_ = PTR_shared_null_1021e1288;
  local_90._12_4_ = (int)((ulong)PTR_shared_null_1021e1288 >> 0x20);
  local_80._8_4_ = (int)PTR_shared_null_1021e15e8;
  local_80._0_8_ = PTR_shared_null_1021e15e8;
  local_80._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  local_70 = 0;
  local_68 = PTR_shared_null_1021e1288;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  uVar1 = FUN_100d50af0(param_1,"",&local_a0);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = local_a0;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_9c;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_98;
  }
  QString::toUtf8();
  _strncpy(&DAT_1023188b8,(char *)(local_a8 + *(long *)(local_a8 + 0x10)),5);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d50aa0;
    }
    QArrayData::deallocate(local_a8,1,8);
  }
LAB_100d50aa0:
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = &DAT_1023188b8;
  }
  FUN_10005e410(&local_a0);
  return uVar1;
}

