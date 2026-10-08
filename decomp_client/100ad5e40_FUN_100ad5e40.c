
void FUN_100ad5e40(long param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
  if (cVar1 != '\0') {
    if ((param_2 + 0xcffffffbU < 0xb) && ((0x423U >> (param_2 + 0xcffffffbU & 0x1f) & 1) != 0)) {
      FUN_100ad5870(param_1,1);
    }
    else {
      FUN_100ad5870(param_1,0);
      local_38 = 0;
      uStack_30 = 0;
      uStack_40 = 0;
      local_28 = 0;
      local_48 = 0x100000004;
      FUN_100acb230(*(undefined8 *)(param_1 + 0x10),0x10,&local_48,0x24);
    }
    if (param_2 == 0x30000005) {
      cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
      if (cVar1 != '\0') {
        FUN_100ada100(param_1 + 0x9c0);
      }
    }
    else if ((param_2 == 0x3000000d) && (param_3 == 0x30000005)) {
      cVar1 = FUN_100acadf0(*(undefined8 *)(param_1 + 0x10),1);
      if (cVar1 != '\0') {
        FUN_100ada190(param_1 + 0x9c0);
      }
    }
  }
  return;
}

