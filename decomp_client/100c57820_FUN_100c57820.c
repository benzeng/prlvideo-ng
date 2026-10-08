
void FUN_100c57820(void)

{
  int iVar1;
  long lVar2;
  undefined8 local_30;
  
  lVar2 = FUN_100c54dc0();
  if (lVar2 != 0) {
    do {
      if (*(code **)(lVar2 + 0x58) != (code *)0x0) {
        iVar1 = (**(code **)(lVar2 + 0x58))(lVar2,0,&local_30,0);
        if (0 < iVar1) {
          FUN_100c560f0(&DAT_102316318,FUN_100c57800,lVar2,local_30,iVar1,0);
        }
      }
      lVar2 = FUN_100c54e80(lVar2);
    } while (lVar2 != 0);
  }
  return;
}

