
void FUN_10025ff70(long param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
LAB_10025ff9a:
  iVar2 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),1,0xffffffff);
  if (iVar2 != -0xfffd) goto code_r0x00010025ffb7;
  bVar1 = true;
  iVar2 = -0xfffd;
  goto LAB_10025ffd8;
code_r0x00010025ffb7:
  if (iVar2 == -0xfffc) {
    return;
  }
  if (bVar1) {
LAB_10025ffd8:
    FUN_100260000(param_1);
    if (iVar2 == -0xfffe) {
      bVar1 = false;
    }
  }
  goto LAB_10025ff9a;
}

