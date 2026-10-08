
uint FUN_100acdbd0(long param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  QArrayData *local_40;
  undefined1 local_33;
  
  if ((DAT_102313b50 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102313b50), iVar2 != 0)) {
    DAT_102313b30 = QString::fromAscii_helper("tools.coherence.dump",0x14);
    DAT_102313b38 = 2;
    DAT_102313b40 = QString::fromAscii_helper("",0);
    DAT_102313b48 = 0;
    ___cxa_atexit(FUN_100ace050,0,0x100000000);
    ___cxa_guard_release(&DAT_102313b50);
  }
  uVar5 = 0;
  if (DAT_102313b38 != 0) {
    uVar5 = 0;
    puVar4 = &DAT_102313b30;
    do {
      uVar3 = FUN_100319390(*(undefined8 *)(param_1 + 0x70));
      FUN_10018c2b0(uVar3);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmRuntimeOptions();
      CVmRunTimeOptions::getSystemFlags();
      iVar2 = QString::indexOf(&local_40,puVar4,0,1);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_33 = *(int *)local_40 != 0;
          UNLOCK();
          if ((bool)local_33) goto LAB_100acdcf1;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_100acdcf1:
      if (iVar2 != -1) {
        uVar5 = uVar5 | *(uint *)(puVar4 + 1);
      }
      piVar1 = (int *)(puVar4 + 3);
      puVar4 = puVar4 + 2;
    } while (*piVar1 != 0);
  }
  return uVar5;
}

