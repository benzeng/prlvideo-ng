
bool FUN_1007d02f0(long *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970("","IOCommunication",2,"Perfoming credentials setting");
  }
  cVar1 = FUN_1007d0940();
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    cVar1 = FUN_1007d0940();
    if (cVar1 == '\0') {
      bVar3 = false;
    }
    else {
      lVar2 = *(long *)(param_2 + 8);
      lVar2 = FUN_1007ebc60(*(long *)(lVar2 + 0x10) + lVar2,*(undefined4 *)(lVar2 + 4));
      *param_1 = lVar2;
      bVar3 = lVar2 != 0;
    }
  }
  return bVar3;
}

