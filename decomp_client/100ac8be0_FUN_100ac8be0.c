
undefined4 FUN_100ac8be0(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_30;
  double local_28;
  
  pcVar1 = DAT_102311b78;
  local_30 = (double)param_1;
  local_28 = (double)param_2;
  local_48 = 0;
  uStack_40 = 0;
  local_4c = 0;
  local_50 = 0;
  uVar2 = (*DAT_1023119d8)();
  iVar3 = (*pcVar1)(uVar2,param_3,0xffffffff,0,&local_30,&local_48,&local_4c,&local_50);
  uVar2 = 0;
  if (iVar3 == 0) {
    uVar2 = local_4c;
  }
  return uVar2;
}

