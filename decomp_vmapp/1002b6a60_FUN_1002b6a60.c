
undefined8 FUN_1002b6a60(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined1 local_50 [24];
  void *local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  if (1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"OpenUsbManager");
  }
  lVar4 = _IOServiceMatching("com_parallels_usb_control");
  if (lVar4 == 0) {
    if (DAT_1011c568c < 0) goto LAB_1002b6b83;
    pcVar5 = "Can\'t create a matching dictionary to open USB Connect Service!";
LAB_1002b6b56:
    FUN_1008e3970("","USB",0,pcVar5);
  }
  else {
    iVar2 = _IOServiceGetMatchingService(*(undefined4 *)PTR__kIOMasterPortDefault_100ba2470,lVar4);
    if (iVar2 == 0) {
      if (DAT_1011c568c < 0) goto LAB_1002b6b83;
      pcVar5 = "USB Connect Service not found!";
      goto LAB_1002b6b56;
    }
    iVar3 = _IOServiceOpen(iVar2,*(undefined4 *)PTR__mach_task_self__100ba25d0,0,&DAT_1011c5610);
    _IOObjectRelease(iVar2);
    if (iVar3 == 0) {
      return 1;
    }
    if (DAT_1011c568c < 0) goto LAB_1002b6b83;
    FUN_1008e3970("","USB",0,"Can\'t open USB Connect Service (0x%x)!",iVar3);
  }
  if (-1 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"Can\'t open Parallel\'s USB Device Manager");
  }
LAB_1002b6b83:
  uVar1 = DAT_1011c3650;
  local_38 = (void *)0x0;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  FUN_10006a060(local_50);
  FUN_1000648b0(uVar1,0x80008000,&local_38,local_50);
  FUN_10006a680(local_50);
  if (local_38 != (void *)0x0) {
    if (pvStack_30 != local_38) {
      pvStack_30 = (void *)((~((long)pvStack_30 + (-4 - (long)local_38)) & 0xfffffffffffffffcU) +
                           (long)pvStack_30);
    }
    operator_delete(local_38);
  }
  return 0;
}

