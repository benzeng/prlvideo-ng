
void FUN_100dfa5c0(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  tm *ptVar6;
  tm local_188;
  __darwin_time_t local_150;
  timeval local_148;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  FUN_100dfa450();
  iVar3 = _open(&DAT_102310404,0x209,0x1b6);
  if (iVar3 < 0) {
    if (iVar3 == -1) {
      pcVar4 = (char *)FUN_100dfa1a0();
      _strncpy(&DAT_102310004,pcVar4,0x400);
      DAT_102310403 = 0;
      _snprintf(&DAT_102310404,0x400,"%s/%s",pcVar4,"parallels.log");
      iVar3 = DAT_10230ffe8;
      DAT_102310803 = 0;
      DAT_10230ffe8 = -1;
      if (iVar3 != -1) {
        _close(iVar3);
      }
      FUN_100dfa450();
      iVar3 = _open(&DAT_102310404,0x209,0x1b6);
      if (-1 < iVar3) goto LAB_100dfa6a2;
      if (iVar3 == -1) goto LAB_100dfa8ad;
    }
  }
  else {
LAB_100dfa6a2:
    _fchmod(iVar3,0x1b6);
  }
  _write(iVar3,"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n",0x44);
  _write(iVar3,"* Parallels Virtualization System Log File\n",0x2b);
  _write(iVar3,"*\n",2);
  _sprintf((char *)&local_138,"* Product information %s\n","Parallels Desktop");
  sVar5 = _strlen((char *)&local_138);
  _write(iVar3,&local_138,(long)(int)sVar5);
  _sprintf((char *)&local_138,"* Build information %s %s\n","12.2.1 (41615)",
           "Mon, 26 Jun 2017 17:54:09");
  sVar5 = _strlen((char *)&local_138);
  _write(iVar3,&local_138,(long)(int)sVar5);
  _write(iVar3,"*\n",2);
  _gettimeofday(&local_148,(void *)0x0);
  local_150 = local_148.tv_sec;
  ptVar6 = _localtime_r(&local_150,&local_188);
  sVar5 = _strftime((char *)&local_138,0x80,"%m-%d %H:%M:%S",ptVar6);
  _sprintf((char *)((long)&local_138 + (long)(int)sVar5),".%03d ",
           (ulong)(uint)(local_148.tv_usec / 1000));
  sVar5 = _strlen((char *)&local_138);
  *(undefined2 *)((long)&local_138 + sVar5) = 10;
  sVar5 = _strlen((char *)&local_138);
  _write(iVar3,&local_138,(long)(int)sVar5);
  uVar2 = (ulong)local_138 >> 0x10;
  local_138 = CONCAT62((uint6)uVar2 & 0xffffffffff00,0xa2a);
  sVar5 = _strlen((char *)&local_138);
  _write(iVar3,&local_138,(long)(int)sVar5);
  local_128 = 0x6e6963614d206d65;
  local_130 = 0x7473795320676e69;
  local_138 = 0x74617265704f202a;
  local_11c = 10;
  local_120 = 0x68736f74;
  sVar5 = _strlen((char *)&local_138);
  _write(iVar3,&local_138,(long)(int)sVar5);
  _write(iVar3,"* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n",0x44);
  _write(iVar3,"\n",1);
  _close(iVar3);
LAB_100dfa8ad:
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

