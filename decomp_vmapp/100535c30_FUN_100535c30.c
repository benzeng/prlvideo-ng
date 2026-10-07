
undefined1 FUN_100535c30(long param_1,long *param_2,int *param_3)

{
  uint uVar1;
  char cVar2;
  void *pvVar3;
  QArrayData *local_850;
  QArrayData *local_848;
  undefined4 local_840;
  int local_83c;
  undefined1 local_838 [2055];
  undefined1 local_31;
  
  ___bzero(&local_840,0x808);
  local_83c = -1;
  local_840 = 0x102;
  uVar1 = *(int *)(*param_2 + 4) * 2;
  if (uVar1 < 0x800) {
    pvVar3 = (void *)QString::utf16();
    _memcpy(local_838,pvVar3,(ulong)uVar1);
    cVar2 = FUN_100539490(*(undefined8 *)(param_1 + 0x38),&local_840,5000);
    if (cVar2 == '\0') {
      FUN_1008e3970("","InvSharingHost",0,"syncCommand() failed, couldn\'t send mount request");
      return 0;
    }
    *param_3 = local_83c;
    if (local_83c != -1) {
      return 1;
    }
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",0,"couldn\'t share the path \"%s\"",
                  local_850 + *(long *)(local_850 + 0x10));
    if (*(int *)local_850 == -1) {
      return 0;
    }
    local_848 = local_850;
    if (*(int *)local_850 != 0) {
      LOCK();
      *(int *)local_850 = *(int *)local_850 + -1;
      UNLOCK();
      if (*(int *)local_850 != 0) {
        return 0;
      }
      local_31 = 0;
    }
  }
  else {
    QString::toUtf8();
    FUN_1008e3970("","InvSharingHost",0,"the path \"%s\" is too long",
                  local_848 + *(long *)(local_848 + 0x10));
    if (*(int *)local_848 == -1) {
      return 0;
    }
    if (*(int *)local_848 != 0) {
      LOCK();
      *(int *)local_848 = *(int *)local_848 + -1;
      UNLOCK();
      if (*(int *)local_848 != 0) {
        return 0;
      }
      local_31 = 0;
    }
  }
  QArrayData::deallocate(local_848,1,8);
  return 0;
}

