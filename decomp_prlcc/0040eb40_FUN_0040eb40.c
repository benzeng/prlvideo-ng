
int FUN_0040eb40(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [24];
  
  iVar1 = FUN_0040f060(0);
  if ((iVar1 == 0) && (iVar1 = FUN_0040e780(auStack_28), iVar1 == 0)) {
    iVar1 = FUN_0040ea60(auStack_28,100);
    if (((iVar1 == 0) &&
        (((iVar1 = FUN_0040ea60(auStack_28,200), iVar1 == 0 &&
          (iVar1 = FUN_0040ea60(auStack_28,500), iVar1 == 0)) &&
         (iVar1 = FUN_0040ea60(auStack_28,1000), iVar1 == 0)))) &&
       (((iVar1 = FUN_0040ea60(auStack_28,0x1000), iVar1 == 0 &&
         (iVar1 = FUN_0040ea60(auStack_28,0x2800), iVar1 == 0)) &&
        (iVar1 = FUN_0040ea60(auStack_28,0x7d000), iVar1 == 0)))) {
      iVar1 = FUN_0040ea60(auStack_28,0x100000);
      iVar2 = FUN_0040e6c0(auStack_28);
      if (iVar1 != 0) {
        return iVar1;
      }
      return iVar2;
    }
    FUN_0040e6c0(auStack_28);
  }
  return iVar1;
}

