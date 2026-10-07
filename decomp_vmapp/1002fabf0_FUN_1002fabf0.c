
void FUN_1002fabf0(undefined8 param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  iVar1 = param_2[1];
  uVar4 = 0x80e1;
  if (iVar1 == 0x8814) {
    uVar4 = 0x1908;
  }
  uVar2 = 0x8367;
  if (iVar1 == 0x8814) {
    uVar2 = 0x1406;
  }
  puVar3 = (undefined8 *)(param_2 + 4);
  if (param_3 == 0x405) {
    puVar3 = (undefined8 *)(param_2 + 6);
  }
  _CGLTexImageIOSurface2D(DAT_1011c4a88,*param_2,iVar1,param_2[2],param_2[3],uVar4,uVar2,*puVar3,0);
  return;
}

