
void FUN_10004d0c0(void)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  pid_t local_1ac;
  QString local_1a8;
  QString local_1a0;
  undefined4 local_198;
  undefined8 uStack_194;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  QString local_148;
  undefined1 local_139;
  byte local_138;
  char local_137 [255];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_150 = 0;
  sVar3 = _GetNextProcess(&local_150);
  if (sVar3 == 0) {
    do {
      uStack_194 = &local_138;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_18c = 0;
      local_158 = 0;
      local_198 = 0x48;
      _GetProcessInformation(&local_150,&local_198);
      uStack_194[(ulong)*uStack_194 + 1] = 0;
      iVar4 = _strcmp("WinAppHelper",local_137);
      if (iVar4 == 0) {
        local_1a0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
        lVar5 = _ProcessInformationCopyDictionary(&local_150,0xffffffff);
        if (lVar5 == 0) {
          FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to copy process information");
LAB_10004d330:
          if (2 < DAT_10230ffd0) {
            FUN_100df99c0("SGASMGMT","prl_client_app",3,"Failed to get process path");
          }
        }
        else {
          lVar6 = _CFDictionaryGetValue(lVar5,&cf_BundlePath);
          if (lVar6 == 0) {
            bVar1 = false;
            FUN_100df99c0("SGASMGMT","prl_client_app",0,"Failed to get bundle path");
          }
          else {
            QString::fromCFString((__CFString *)&local_148);
            QString::operator=(&local_1a0,&local_148);
            bVar1 = true;
            if (*(int *)local_148.field0_0x0 != -1) {
              if (*(int *)local_148.field0_0x0 != 0) {
                LOCK();
                *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                local_139 = *(int *)local_148.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_139) goto LAB_10004d280;
              }
              QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
            }
          }
LAB_10004d280:
          _CFRelease(lVar5);
          if ((!bVar1) || (*(int *)(local_1a0.field0_0x0 + 4) == 0)) goto LAB_10004d330;
          FUN_100047790(&local_1a8,&local_1a0);
          if (*(int *)(local_1a8.field0_0x0 + 4) != 0) {
            cVar2 = operator==(&local_1a8,(QString *)&DAT_102310840);
            if (cVar2 == '\0') {
              iVar4 = _GetProcessPID(&local_150,&local_1ac);
              if (iVar4 == 0) {
                _kill(local_1ac,0xf);
                FUN_100045e20(&local_1a0,1);
              }
              else if (2 < DAT_10230ffd0) {
                FUN_100df99c0("SGASMGMT","prl_client_app",3,"GetProcessPID() failed with %d");
              }
            }
          }
          if (*(int *)local_1a8.field0_0x0 != -1) {
            if (*(int *)local_1a8.field0_0x0 != 0) {
              LOCK();
              *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
              local_139 = *(int *)local_1a8.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_139) goto LAB_10004d3c0;
            }
            QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
          }
        }
LAB_10004d3c0:
        if (*(int *)local_1a0.field0_0x0 != -1) {
          if (*(int *)local_1a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
            local_139 = *(int *)local_1a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_139) goto LAB_10004d420;
          }
          QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
        }
      }
LAB_10004d420:
      sVar3 = _GetNextProcess(&local_150);
    } while (sVar3 == 0);
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

