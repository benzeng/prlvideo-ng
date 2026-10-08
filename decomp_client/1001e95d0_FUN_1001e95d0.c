
byte FUN_1001e95d0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 local_50 [8];
  long local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  int local_30;
  
  MacUtils::getProcessesInfo();
  FUN_1001c1b20(&local_48,local_50);
  local_40 = (undefined8 *)(local_48 + 0x10 + (long)*(int *)(local_48 + 8) * 8);
  local_38 = (undefined8 *)(local_48 + 0x10 + (long)*(int *)(local_48 + 0xc) * 8);
  local_30 = 1;
  FUN_1001c1230(local_50);
  if ((local_30 != 0) && (local_40 != local_38)) {
    do {
      piVar1 = (int *)*local_40;
      cVar2 = operator==((QString *)(piVar1 + 2),(QString *)(param_1 + 8));
      if ((cVar2 != '\0') && (*param_2 == (long)*piVar1)) {
        param_2 = (long *)(ulong)((char)piVar1[8] == '\0');
        bVar3 = 1;
        goto LAB_1001e9676;
      }
      local_40 = local_40 + 1;
      local_30 = 1;
    } while (local_40 != local_38);
  }
  bVar3 = 0;
LAB_1001e9676:
  FUN_1001c1230(&local_48);
  return bVar3 & (byte)param_2;
}

