
undefined8 FUN_1005fe050(long param_1,long param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  QArrayData *local_138;
  undefined1 local_128 [72];
  QArrayData *local_e0;
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  undefined1 local_c0 [136];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  FUN_1005b7150(local_c0);
  FUN_1005b6bc0(local_128);
  iVar3 = FUN_1005c2ea0(local_c0,param_1 + 0x10,0x409,local_128);
  if (iVar3 < 0) {
    QString::toUtf8();
    FUN_1008e3970("Backup","vdisk",0,"Failed to open disk descriptor [%s], err = 0x%X",
                  local_138 + *(long *)(local_138 + 0x10),iVar3);
    uVar4 = 0x80021000;
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        if (*(int *)local_138 != 0) goto LAB_1005fe284;
      }
      QArrayData::deallocate(local_138,1,8);
    }
  }
  else {
    uVar4 = 0;
    if (local_d0 != local_d8) {
      puVar5 = local_d0;
      do {
        for (puVar1 = *(undefined1 **)(puVar5 + 0x38); puVar1 != puVar5 + 0x30;
            puVar1 = *(undefined1 **)(puVar1 + 8)) {
          if (*(int *)(puVar1 + 0x10) == 2) {
            cVar2 = QDir::isRelativePath((QString *)(puVar1 + 0x18));
            if (cVar2 == '\0') {
              FUN_10000c490(param_2 + 0x48,(QString *)(puVar1 + 0x18));
            }
          }
        }
        puVar5 = *(undefined1 **)(puVar5 + 8);
      } while (puVar5 != local_d8);
      lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
      uVar4 = 0;
    }
  }
LAB_1005fe284:
  FUN_10057e490(local_d8);
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      UNLOCK();
      if (*(int *)local_e0 != 0) goto LAB_1005fe2cc;
    }
    QArrayData::deallocate(local_e0,2,8);
  }
LAB_1005fe2cc:
  FUN_100603490(local_c0);
  if (lVar6 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

