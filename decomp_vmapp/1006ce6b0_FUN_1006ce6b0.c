
void FUN_1006ce6b0(long param_1,char *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 *param_5)

{
  undefined8 local_1a0;
  QString local_198;
  undefined1 local_189;
  undefined4 local_188;
  undefined8 local_184;
  undefined4 local_17c;
  undefined2 local_178;
  undefined1 local_176;
  undefined1 local_175;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  char local_171 [16];
  char local_161 [16];
  undefined8 local_151;
  undefined4 local_149;
  undefined8 local_145;
  undefined8 local_13d;
  char local_135 [253];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  ___bzero(&local_188,0x150);
  local_178 = *(undefined2 *)((long)param_5 + 0x24);
  local_17c = *(undefined4 *)(param_5 + 4);
  local_176 = *(undefined1 *)(param_5 + 5);
  local_175 = *(undefined1 *)((long)param_5 + 0x2c);
  local_174 = *(undefined1 *)((long)param_5 + 0x34);
  local_173 = *(undefined1 *)(param_5 + 7);
  local_149 = *(undefined4 *)(param_5 + 0xb);
  local_172 = *(int *)(param_5 + 6) != 0;
  local_188 = param_4;
  local_184 = param_3;
  _strncpy(local_171,param_2,0x10);
  _strncpy(local_161,(char *)((long)param_5 + 0x3c),0x10);
  if (param_2 != (char *)0x0) {
    _strlen(param_2);
  }
  QString::fromUtf8_helper((char *)&local_198,(int)param_2);
  QString::operator=((QString *)(param_1 + 0x10),&local_198);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      local_189 = *(int *)local_198.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_189) goto LAB_1006ce7e7;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_1006ce7e7:
  local_151 = *param_5;
  local_145 = param_5[2];
  local_13d = param_5[3];
  if ((char *)param_5[10] != (char *)0x0) {
    _strlcpy(local_135,(char *)param_5[10],0xfd);
  }
  local_1a0 = 0;
  _IOConnectCallStructMethod(*(undefined4 *)(param_1 + 8),0,&local_188,0x150,0,&local_1a0);
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

