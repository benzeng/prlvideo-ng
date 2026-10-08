
undefined8 FUN_100313f60(undefined8 param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  if ((DAT_102312220 == '\0') && (iVar1 = ___cxa_guard_acquire(&DAT_102312220), iVar1 != 0)) {
    DAT_102312218 = (undefined8 *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10019a0c0,&DAT_102312218,0x100000000);
    ___cxa_guard_release(&DAT_102312220);
  }
  if (*(int *)((long)DAT_102312218 + 0x14) == 0) {
    FUN_100314850(param_1,&DAT_102312218);
  }
  if (*(uint *)(DAT_102312218 + 4) != 0) {
    uVar3 = *(uint *)((long)DAT_102312218 + 0x24) ^ param_2;
    for (puVar4 = *(undefined8 **)
                   (DAT_102312218[1] + ((ulong)uVar3 % (ulong)*(uint *)(DAT_102312218 + 4)) * 8);
        puVar4 != DAT_102312218; puVar4 = (undefined8 *)*puVar4) {
      if ((*(uint *)(puVar4 + 1) == uVar3) && (*(uint *)((long)puVar4 + 0xc) == param_2)) {
        if (puVar4 != DAT_102312218) {
          return CONCAT71((int7)((ulong)DAT_102312218[1] >> 8),1);
        }
        break;
      }
    }
  }
  uVar2 = CMessageDataProvider::hasKBArticle((int)param_1);
  return uVar2;
}

