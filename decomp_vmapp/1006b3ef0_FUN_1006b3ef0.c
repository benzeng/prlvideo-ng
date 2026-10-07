
undefined8 * FUN_1006b3ef0(undefined8 *param_1,uint param_2,char param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  int iVar3;
  char *pcVar4;
  QArrayData *local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  if ((param_2 < 2) && (param_3 != '\0')) {
    pcVar4 = (&PTR_s_Shared_100bcd590)[param_2];
    sVar1 = _strlen(pcVar4);
    iVar3 = (int)sVar1;
  }
  else {
    if (param_2 != 0) {
      local_28 = (QArrayData *)PTR_shared_null_100ba20d0;
      QString::sprintf((char *)&local_28,"%s #%d","Host-Only");
      *param_1 = local_28;
      if (1 < *(int *)local_28 + 1U) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + 1;
        local_1b = *(int *)local_28 != 0;
        UNLOCK();
      }
      if (*(int *)local_28 == -1) {
        return param_1;
      }
      if (*(int *)local_28 != 0) {
        LOCK();
        *(int *)local_28 = *(int *)local_28 + -1;
        UNLOCK();
        if (*(int *)local_28 != 0) {
          return param_1;
        }
        local_1a = 0;
      }
      QArrayData::deallocate(local_28,2,8);
      return param_1;
    }
    pcVar4 = "Host-Only";
    iVar3 = 9;
  }
  uVar2 = QString::fromAscii_helper(pcVar4,iVar3);
  *param_1 = uVar2;
  return param_1;
}

