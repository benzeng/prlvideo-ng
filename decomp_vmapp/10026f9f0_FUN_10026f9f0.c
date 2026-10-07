
void FUN_10026f9f0(long param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = true;
  do {
    iVar1 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),1,0xffffffff);
    if (iVar1 == -0xfffd) {
LAB_10026fa30:
      FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
      FUN_10026faa0(param_1);
      bVar3 = true;
    }
    else {
      if (iVar1 == -0xfffc) {
        return;
      }
      if (bVar3) goto LAB_10026fa30;
    }
    if (iVar1 == -0xfffe) {
      bVar3 = false;
    }
    else if (iVar1 == 3) {
      while (lVar2 = FUN_1002584f0(param_1 + 0x48), lVar2 != 0) {
        FUN_100258470(param_1 + 0x48,lVar2);
      }
    }
  } while( true );
}

