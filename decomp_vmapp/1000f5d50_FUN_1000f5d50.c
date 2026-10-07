
undefined1 FUN_1000f5d50(long param_1,long param_2)

{
  void *pvVar1;
  long *plVar2;
  long lVar3;
  size_t sVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  
  QMutex::lock();
  plVar2 = *(long **)(param_1 + 0x10);
  plVar5 = plVar2;
  do {
    if (plVar5 == *(long **)(param_1 + 0x18)) {
      uVar7 = 0;
LAB_1000f5dfc:
      QMutex::unlock();
      return uVar7;
    }
    if (*plVar5 == param_2) {
      pvVar1 = (void *)(((long)plVar5 - (long)plVar2 & 0xfffffffffffffff8U) + 0x18 + (long)plVar2);
      sVar4 = (long)*(long **)(param_1 + 0x18) - (long)pvVar1;
      _memmove(plVar5,pvVar1,sVar4);
      lVar6 = (sVar4 & 0xfffffffffffffff8) + (long)plVar5;
      lVar3 = *(long *)(param_1 + 0x18);
      uVar7 = 1;
      if (lVar3 != lVar6) {
        *(ulong *)(param_1 + 0x18) = lVar3 + ~((ulong)((lVar3 + -0x18) - lVar6) / 0x18) * 0x18;
      }
      goto LAB_1000f5dfc;
    }
    plVar5 = plVar5 + 3;
  } while( true );
}

