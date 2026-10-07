
undefined8 FUN_1006bd6d0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  char *local_164;
  QString local_150;
  QString local_148;
  undefined1 local_139;
  char local_138 [256];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  QString::fromUtf8_helper((char *)&local_150,0xa320a0);
  QString::operator=(param_3,&local_150);
  if (*(int *)local_150.field0_0x0 != -1) {
    if (*(int *)local_150.field0_0x0 != 0) {
      LOCK();
      *(int *)local_150.field0_0x0 = *(int *)local_150.field0_0x0 + -1;
      local_139 = *(int *)local_150.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_1006bd75b;
    }
    QArrayData::deallocate((QArrayData *)local_150.field0_0x0,2,8);
  }
LAB_1006bd75b:
  local_138[0] = '\0';
  local_178 = 0x60000000f;
  uStack_16c = (undefined4)param_2;
  uStack_168 = (undefined4)((ulong)param_2 >> 0x20);
  uStack_170 = 0xfd;
  local_164 = local_138;
  local_17c = 0;
  iVar2 = FUN_1006ce9f0(param_1,&local_178,&local_17c);
  if (iVar2 != 0) {
    uVar3 = 0;
    goto LAB_1006bd83d;
  }
  _strlen(local_138);
  QString::fromUtf8_helper((char *)&local_148,(int)local_138);
  QString::operator=(param_3,&local_148);
  if (*(int *)local_148.field0_0x0 != -1) {
    if (*(int *)local_148.field0_0x0 != 0) {
      LOCK();
      *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
      local_139 = *(int *)local_148.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_139) goto LAB_1006bd83b;
    }
    QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
  }
LAB_1006bd83b:
  uVar3 = 1;
LAB_1006bd83d:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

