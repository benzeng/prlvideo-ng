
undefined8 * FUN_100499b70(undefined8 *param_1,undefined8 param_2)

{
  char *pcVar1;
  string *psVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  string local_90 [24];
  char *local_78;
  char *pcStack_70;
  char *local_68;
  long local_60;
  string *local_58;
  string *psStack_50;
  string *local_48;
  undefined1 local_34 [4];
  
  lVar5 = _LSSharedFileListCreate(0,param_2,0);
  if (lVar5 == 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar6 = _LSSharedFileListCopySnapshot(lVar5,local_34);
    if (lVar6 == 0) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      local_58 = (string *)0x0;
      psStack_50 = (string *)0x0;
      local_48 = (string *)0x0;
      lVar11 = 0;
      while( true ) {
        lVar7 = _CFArrayGetCount(lVar6);
        if (lVar7 <= lVar11) break;
        uVar8 = _CFArrayGetValueAtIndex(lVar6,lVar11);
        iVar4 = _LSSharedFileListItemResolve(uVar8,3,&local_60,0);
        if ((iVar4 == 0) && (local_60 != 0)) {
          lVar7 = _CFURLCopyFileSystemPath(local_60,0);
          _CFRelease(local_60);
          if (lVar7 != 0) {
            uVar9 = _CFStringGetLength(lVar7);
            uVar10 = uVar9 + 1;
            local_78 = (char *)0x0;
            pcStack_70 = (char *)0x0;
            local_68 = (char *)0x0;
            if (uVar10 != 0) {
              if ((long)uVar9 < -1) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              local_78 = operator_new(uVar10);
              local_68 = local_78 + uVar10;
              uVar9 = ~uVar9;
              pcStack_70 = local_78;
              do {
                *pcStack_70 = '\0';
                pcStack_70 = pcStack_70 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 != 0);
            }
            cVar3 = _CFStringGetCString(lVar7,local_78,(long)pcStack_70 - (long)local_78);
            pcVar1 = local_78;
            if (cVar3 != '\0') {
              _strlen(local_78);
              std::string::__init((char *)local_90,(ulong)pcVar1);
              if (psStack_50 == local_48) {
                FUN_1000e2970(&local_58,local_90);
              }
              else {
                std::string::string(psStack_50,local_90);
                psStack_50 = psStack_50 + 0x18;
              }
              std::string::~string(local_90);
            }
            if (local_78 != (char *)0x0) {
              if (pcStack_70 != local_78) {
                pcStack_70 = local_78;
              }
              operator_delete(local_78);
            }
            _CFRelease(lVar7);
          }
        }
        lVar11 = lVar11 + 1;
      }
      FUN_10049a610(param_1,&local_58);
      psVar2 = local_58;
      if (local_58 != (string *)0x0) {
        while (psStack_50 != psVar2) {
          psStack_50 = psStack_50 + -0x18;
          std::string::~string(psStack_50);
        }
        operator_delete(local_58);
      }
      _CFRelease(lVar6);
    }
    _CFRelease(lVar5);
  }
  return param_1;
}

