
void FUN_100ada210(long param_1,long *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long in_RAX;
  long lVar4;
  long lVar5;
  long local_38;
  
  local_38 = in_RAX;
  cVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
  if ((cVar2 != '\0') || (param_3 != '\0')) {
    if (cVar2 == '\0') {
      FUN_100ad9d90(param_1);
    }
    lVar4 = *param_2;
    bVar1 = true;
    lVar5 = 0;
    if (*(int *)(lVar4 + 4) != 0) {
      lVar4 = FUN_100347740(lVar4 + *(long *)(lVar4 + 0x10));
      lVar5 = 0;
      if (lVar4 != 0) {
        local_38 = 0;
        iVar3 = _CreateEventWithCGEvent(0,lVar4,1,&local_38);
        if (local_38 != 0) {
          if (iVar3 == 0) {
            (**(code **)(**(long **)(param_1 + 0x18) + 0xb8))(*(long **)(param_1 + 0x18),local_38);
          }
          _ReleaseEvent(local_38);
        }
        bVar1 = false;
        lVar5 = lVar4;
      }
    }
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x80))();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x78))();
        if (cVar2 != '\0') {
          DAT_102311848 = 0;
          FUN_100ae3790(param_1,0);
        }
      }
    }
    if (!bVar1) {
      _CFRelease(lVar5);
    }
  }
  return;
}

