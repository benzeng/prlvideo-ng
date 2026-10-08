
undefined8 FUN_100df9c30(long *param_1,uint param_2,char *param_3,va_list param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  mach_port_t mVar6;
  int iVar7;
  tm *ptVar8;
  size_t sVar9;
  pthread_t p_Var10;
  long lVar11;
  char *pcVar12;
  char *pcVar13;
  tm local_1088;
  __darwin_time_t local_1050;
  timeval local_1048;
  char local_1038 [4094];
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  pcVar12 = (char *)*param_1;
  pcVar13 = pcVar12;
  if (pcVar12 != (char *)0x0) {
    while (cVar1 = *pcVar12, cVar1 != '\0') {
      if ((cVar1 == '/') || (cVar1 == '\\')) {
        pcVar12 = pcVar12 + 1;
        pcVar13 = pcVar12;
      }
      else {
        pcVar12 = pcVar12 + 1;
      }
    }
    *param_1 = (long)pcVar13;
  }
  pcVar12 = (char *)param_1[2];
  pcVar13 = pcVar12;
  if (pcVar12 != (char *)0x0) {
    while (cVar1 = *pcVar12, cVar1 != '\0') {
      pcVar12 = pcVar12 + 1;
      if (cVar1 == ':') {
        pcVar13 = pcVar12;
      }
    }
    param_1[2] = (long)pcVar13;
  }
  _gettimeofday(&local_1048,(void *)0x0);
  local_1050 = local_1048.tv_sec;
  ptVar8 = _localtime_r(&local_1050,&local_1088);
  sVar9 = _strftime(local_1038,0x80,"%m-%d %H:%M:%S",ptVar8);
  iVar4 = _sprintf(local_1038 + (int)sVar9,".%03d ",(ulong)(uint)(local_1048.tv_usec / 1000));
  lVar11 = (long)((int)sVar9 + iVar4);
  pcVar12 = local_1038 + lVar11;
  if ((param_2 & 0xfffffff0) == 0x10) {
    builtin_strncpy(local_1038 + lVar11,"QT: ",5);
    pcVar12 = local_1038 + lVar11 + 4;
    lVar11 = lVar11 + 4;
  }
  switch((int)param_2 % 0x10) {
  case 0:
    pcVar12[2] = '\0';
    pcVar12[0] = 'F';
    pcVar12[1] = ' ';
    pcVar12 = local_1038 + lVar11 + 2;
    break;
  case 1:
    pcVar12[2] = '\0';
    pcVar12[0] = 'W';
    pcVar12[1] = ' ';
    pcVar12 = local_1038 + lVar11 + 2;
    break;
  case 2:
    pcVar12[2] = '\0';
    pcVar12[0] = 'I';
    pcVar12[1] = ' ';
    pcVar12 = local_1038 + lVar11 + 2;
    break;
  case 3:
    pcVar12[2] = '\0';
    pcVar12[0] = 'D';
    pcVar12[1] = ' ';
    pcVar12 = local_1038 + lVar11 + 2;
    break;
  case 4:
    pcVar12[2] = '\0';
    pcVar12[0] = 'T';
    pcVar12[1] = ' ';
    pcVar12 = local_1038 + lVar11 + 2;
    break;
  default:
    iVar4 = _sprintf(pcVar12,"O(%u) ",(ulong)(uint)((int)param_2 % 0x10));
    pcVar12 = local_1038 + iVar4 + lVar11;
  }
  if (*(char *)param_1[3] != '\0') {
    iVar4 = _sprintf(pcVar12,"%s ");
    pcVar12 = pcVar12 + iVar4;
  }
  lVar11 = param_1[4];
  uVar5 = _getpid();
  p_Var10 = _pthread_self();
  mVar6 = _pthread_mach_thread_np(p_Var10);
  iVar4 = _sprintf(pcVar12,"/%s:%u:%u/ ",lVar11,(ulong)uVar5,(ulong)mVar6);
  pcVar13 = pcVar12 + iVar4;
  if ((((param_2 & 0xfffffff0) != 0x10) && (*param_1 != 0)) && (param_1[2] != 0)) {
    iVar7 = _sprintf(pcVar13,"{%s @ %s:%i} ",param_1[2],*param_1,(ulong)*(uint *)(param_1 + 1));
    pcVar13 = pcVar12 + (long)iVar7 + (long)iVar4;
  }
  _vsnprintf(pcVar13,(long)&local_38 - (long)pcVar13,param_3,param_4);
  local_3a = 0;
  sVar9 = _strlen(pcVar13);
  (pcVar13 + sVar9)[0] = '\n';
  (pcVar13 + sVar9)[1] = '\0';
  do {
    puVar3 = PTR_DAT_10230fff0;
    LOCK();
    *(int *)PTR_DAT_10230fff0 = *(int *)PTR_DAT_10230fff0 + 1;
    puVar2 = PTR_FUN_10230ffd8;
    UNLOCK();
    sVar9 = _strlen(local_1038);
    (*(code *)puVar2)(local_1038,sVar9 & 0xffffffff);
    LOCK();
    *(int *)puVar3 = *(int *)puVar3 + -1;
    UNLOCK();
  } while (puVar2 != PTR_FUN_10230ffd8);
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 0;
}

