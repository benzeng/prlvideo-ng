
void FUN_100346d70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = **(long **)(param_1 + 0x1a0);
  if ((*(int *)(lVar1 + 4) != 0) && (*(int *)((*(long **)(param_1 + 0x1a0))[1] + 4) != 0)) {
    lVar2 = FUN_100347740(lVar1 + *(long *)(lVar1 + 0x10));
    lVar1 = *(long *)(*(long *)(param_1 + 0x1a0) + 8);
    lVar3 = 0;
    if (*(int *)(lVar1 + 4) != 0) {
      lVar3 = FUN_100347740(lVar1 + *(long *)(lVar1 + 0x10));
    }
    if (lVar2 == 0) {
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      if (lVar3 == 0) goto LAB_100346e2b;
      _CGEventSetIntegerValueField(lVar2,0x2a,0x12181612);
      _CGEventSetIntegerValueField(lVar3,0x2a,0x12181612);
      FUN_100d79c70(lVar2);
      FUN_100d79c70(lVar3);
    }
    _CFRelease(lVar3);
    if (lVar2 != 0) {
LAB_100346e2b:
      _CFRelease(lVar2);
      return;
    }
  }
  return;
}

