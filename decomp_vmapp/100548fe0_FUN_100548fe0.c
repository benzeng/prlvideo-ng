
undefined1 FUN_100548fe0(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  QArrayData *local_50;
  QArrayData *local_48;
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  if ((*(char *)(param_1 + 0x60) != '\0') && (cVar2 = FUN_1005450c0(param_1), cVar2 == '\0')) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    QFileInfo::QFileInfo(local_40,(QString *)(param_1 + 0x50));
    iVar3 = FUN_100544850(param_1 + 0x88,uVar1,local_40,param_2,*(char *)(param_1 + 0x60) == '\0');
    QFileInfo::~QFileInfo(local_40);
    if (iVar3 != 0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,
                    "CGuestMemoryAnonymous::init_mem() failed to create video memory image %s",
                    local_48 + *(long *)(local_48 + 0x10));
      if (*(int *)local_48 == -1) {
        return 0;
      }
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,1,8);
      return 0;
    }
    lVar4 = FUN_100544ca0(param_1 + 0x88,0,*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 == 0) {
      QString::toUtf8();
      FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::init_mem() failed to map %s",
                    local_50 + *(long *)(local_50 + 0x10));
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_31 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1005491d2;
        }
        QArrayData::deallocate(local_50,1,8);
      }
      goto LAB_1005491d2;
    }
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 0x19) != '\0')) {
      lVar4 = _mmap(0,*(undefined8 *)(param_1 + 0x10),3,0x1001,0x20000,0);
      *(long *)(param_1 + 0x20) = lVar4;
      if (1 < lVar4 + 1U) {
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
        *(undefined4 *)(param_1 + 0xa4) = 0;
        FUN_1008e3970("","TransMem",0,
                      "CGuestMemoryAnonymous::init_mem() mapped guest memory with large pages");
        goto LAB_100549211;
      }
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      FUN_1008e3970("","TransMem",0,
                    "[CGuestMemoryAnonymous::map_large_mem] mmap with large pages failed: %s",pcVar6
                   );
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    lVar4 = _mmap(0,*(undefined8 *)(param_1 + 0xb0),3,0x1002,0,0);
    *(long *)(param_1 + 0x20) = lVar4;
    if (lVar4 + 1U < 2) {
      piVar5 = ___error();
      pcVar6 = _strerror(*piVar5);
      FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::init_mem() mmap failed: %s",pcVar6);
      *(undefined8 *)(param_1 + 0x20) = 0;
LAB_1005491d2:
      FUN_100549720(param_1);
      return 0;
    }
  }
LAB_100549211:
  FUN_1008e3970("","TransMem",0,
                "CGuestMemoryAnonymous::init_mem() main=%p[%#llx,%#llx] video=%p[%#llx]",
                *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x18));
  return 1;
}

