
void FUN_10053dad0(long param_1,char *param_2)

{
  int iVar1;
  Data *pDVar2;
  Data *pDVar3;
  long lVar4;
  QVariant local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  Data *local_38;
  undefined1 local_29;
  
  local_38 = (Data *)PTR_shared_null_1021e15e8;
  lVar4 = *(long *)(param_1 + 0x48);
  if (*(char **)(lVar4 + 0x70) == param_2) {
    local_3c = 0x2c;
    FUN_10012b680(&local_38,&local_3c);
  }
  else if (*(char **)(lVar4 + 0x78) == param_2) {
    local_40 = 0x18;
    FUN_10012b680(&local_38,&local_40);
  }
  else if (*(char **)(lVar4 + 0x80) == param_2) {
    local_44 = 8;
    FUN_10012b680(&local_38,&local_44);
  }
  else if (*(char **)(lVar4 + 0x88) == param_2) {
    local_48 = 7;
    FUN_10012b680(&local_38,&local_48);
  }
  else if (*(char **)(lVar4 + 0x90) == param_2) {
    local_4c = 0x2d;
    FUN_10012b680(&local_38,&local_4c);
    local_50 = 0x2e;
    FUN_10012b680(&local_38,&local_50);
    local_54 = 0x2f;
    FUN_10012b680(&local_38,&local_54);
    local_58 = 0x30;
    FUN_10012b680(&local_38,&local_58);
  }
  if (*(int *)(local_38 + 0xc) != *(int *)(local_38 + 8)) {
    if (DAT_1022743b8 == 0) {
      DAT_1022743b8 = FUN_1003df280("QList<PRL_ALLOWED_VM_COMMAND>",0xffffffffffffffff,1);
    }
    QVariant::QVariant(&local_68,DAT_1022743b8,&local_38,0);
    QObject::setProperty(param_2,(QVariant *)"allowedCommands");
    QVariant::~QVariant(&local_68);
  }
  pDVar2 = local_38;
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    iVar1 = *(int *)(local_38 + 0xc);
    if (iVar1 != *(int *)(local_38 + 8)) {
      lVar4 = (long)*(int *)(local_38 + 8) * 8 + (long)iVar1 * -8;
      pDVar3 = local_38 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar3 != (void *)0x0) {
          operator_delete(*(void **)pDVar3);
        }
        pDVar3 = pDVar3 + -8;
        lVar4 = lVar4 + 8;
      } while (lVar4 != 0);
    }
    QListData::dispose(pDVar2);
  }
  return;
}

