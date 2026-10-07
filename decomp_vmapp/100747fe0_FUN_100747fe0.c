
void FUN_100747fe0(undefined8 param_1,undefined8 param_2,uint *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_4048 [16416];
  
  ___bzero(local_4048,0x4020);
  uVar1 = *param_3;
  iVar2 = 0;
  if (uVar1 < 0x7e000001) {
    iVar2 = uVar1 + 0x10 + (int)uVar1 / 0xff;
  }
  if (param_4 < iVar2) {
    if ((int)uVar1 < 0x1000b) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    FUN_10074ef30(local_4048,param_1,param_2,param_3,param_4,uVar3);
  }
  else {
    FUN_100745900(local_4048,param_1,param_2,uVar1,param_4,1);
  }
  return;
}

