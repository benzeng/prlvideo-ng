
void FUN_10087c410(void)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar2 = FUN_100879bc0();
  if (lVar2 != 0) {
    do {
      if (*(code **)(lVar2 + 0x50) != (code *)0x0) {
        iVar1 = (**(code **)(lVar2 + 0x50))(lVar2,0,&local_30,0);
        if (0 < iVar1) {
          FUN_10087aef0(&DAT_1011c08d0,FUN_10087c3f0,lVar2,local_30,iVar1,0);
        }
      }
      lVar2 = FUN_100879c80(lVar2);
    } while (lVar2 != 0);
  }
  return;
}

