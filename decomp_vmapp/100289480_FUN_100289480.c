
void FUN_100289480(undefined8 param_1,long param_2)

{
  long lVar1;
  short sVar2;
  int iVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  
  lVar1 = *(long *)(param_2 + 0x88);
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  sVar2 = FUN_100288be0(lVar1 + 0x30,&local_50);
  if (sVar2 == 0) {
    if (*(char *)(lVar1 + 0x18) == -0x60) {
      iVar3 = FUN_100410bd0(lVar1 + 0x18,*(undefined1 *)(lVar1 + 4),local_50,local_48,0,0);
      if (-1 < iVar3) {
        FUN_1002886c0(param_1,param_2);
      }
    }
    else if (*(char *)(lVar1 + 0x18) == '\x03') {
      FUN_100288b90(lVar1,local_50,local_48);
      FUN_1002886c0(param_1,param_2);
    }
    else {
      FUN_100288820(param_1,1,2,0,param_2);
    }
  }
  else {
    FUN_100288820(param_1,sVar2,2,0,param_2);
  }
  FUN_10008d3f0(&local_40);
  return;
}

