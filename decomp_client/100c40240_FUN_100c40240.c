
bool FUN_100c40240(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  lVar3 = 0;
  if ((param_2 == 0) && (param_2 = FUN_100c27a20(), lVar3 = param_2, param_2 == 0)) {
    FUN_100c62ee0(0x10,0x9f,0x41,"ec2_smpl.c",300);
    return false;
  }
  FUN_100c27c60(param_2);
  lVar2 = FUN_100c27e20(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_100c34010(lVar2,param_1 + 0xb0,param_1 + 0x80), iVar1 != 0)) {
    bVar4 = *(int *)(lVar2 + 8) != 0;
  }
  FUN_100c27d40(param_2);
  if (lVar3 != 0) {
    FUN_100c27ab0(lVar3);
  }
  return bVar4;
}

