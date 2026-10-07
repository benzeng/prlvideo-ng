
bool FUN_100865040(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  bVar4 = false;
  lVar3 = 0;
  if ((param_2 == 0) && (param_2 = FUN_10084c820(), lVar3 = param_2, param_2 == 0)) {
    FUN_100887ce0(0x10,0x9f,0x41,"ec2_smpl.c",300);
    return false;
  }
  FUN_10084ca60(param_2);
  lVar2 = FUN_10084cc20(param_2);
  if ((lVar2 != 0) && (iVar1 = FUN_100858e10(lVar2,param_1 + 0xb0,param_1 + 0x80), iVar1 != 0)) {
    bVar4 = *(int *)(lVar2 + 8) != 0;
  }
  FUN_10084cb40(param_2);
  if (lVar3 != 0) {
    FUN_10084c8b0(lVar3);
  }
  return bVar4;
}

