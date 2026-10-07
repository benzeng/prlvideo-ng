
void FUN_100272420(long param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  do {
    iVar1 = FUN_1002efb70(*(undefined8 *)(param_1 + 0x40),1,0xffffffff);
    if (iVar1 == -0xfffd) {
LAB_100272460:
      FUN_1002ef6b0(*(undefined8 *)(param_1 + 0x40));
      FUN_100271b40(param_1);
      bVar2 = true;
    }
    else {
      if (iVar1 == -0xfffc) {
        return;
      }
      if (bVar2) goto LAB_100272460;
    }
    if (iVar1 == -0xfffe) {
      bVar2 = false;
    }
  } while( true );
}

