
undefined8 * FUN_100499f70(undefined8 *param_1,byte *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  string *psVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  string local_80 [24];
  char *local_68;
  char *pcStack_60;
  char *local_58;
  string *local_48;
  string *psStack_40;
  string *local_38;
  
  uVar1 = *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0;
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  lVar5 = _CFStringCreateWithCString(uVar1,param_2,0x8000100);
  if (lVar5 == 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    lVar6 = _CFURLCreateWithString(uVar1,lVar5,0);
    if (lVar6 == 0) {
      param_1[2] = 0;
      param_1[1] = 0;
      *param_1 = 0;
    }
    else {
      lVar7 = _LSCopyApplicationURLsForURL(lVar6,0xffffffff);
      if (lVar7 == 0) {
        param_1[2] = 0;
        param_1[1] = 0;
        *param_1 = 0;
      }
      else {
        local_48 = (string *)0x0;
        psStack_40 = (string *)0x0;
        local_38 = (string *)0x0;
        for (lVar11 = 0; lVar8 = _CFArrayGetCount(lVar7), lVar11 < lVar8; lVar11 = lVar11 + 1) {
          lVar8 = _CFArrayGetValueAtIndex(lVar7,lVar11);
          if ((lVar8 != 0) && (lVar8 = _CFURLCopyFileSystemPath(lVar8,0), lVar8 != 0)) {
            uVar9 = _CFStringGetLength(lVar8);
            uVar10 = uVar9 + 1;
            local_68 = (char *)0x0;
            pcStack_60 = (char *)0x0;
            local_58 = (char *)0x0;
            if (uVar10 != 0) {
              if ((long)uVar9 < -1) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              local_68 = operator_new(uVar10);
              local_58 = local_68 + uVar10;
              uVar9 = ~uVar9;
              pcStack_60 = local_68;
              do {
                *pcStack_60 = '\0';
                pcStack_60 = pcStack_60 + 1;
                uVar9 = uVar9 + 1;
              } while (uVar9 != 0);
            }
            cVar4 = _CFStringGetCString(lVar8,local_68,(long)pcStack_60 - (long)local_68,0x8000100);
            pcVar2 = local_68;
            if (cVar4 != '\0') {
              _strlen(local_68);
              std::string::__init((char *)local_80,(ulong)pcVar2);
              if (psStack_40 == local_38) {
                FUN_1000e2970(&local_48,local_80);
              }
              else {
                std::string::string(psStack_40,local_80);
                psStack_40 = psStack_40 + 0x18;
              }
              std::string::~string(local_80);
            }
            if (local_68 != (char *)0x0) {
              if (pcStack_60 != local_68) {
                pcStack_60 = local_68;
              }
              operator_delete(local_68);
            }
            _CFRelease(lVar8);
          }
        }
        FUN_10049a610(param_1,&local_48);
        psVar3 = local_48;
        if (local_48 != (string *)0x0) {
          while (psStack_40 != psVar3) {
            psStack_40 = psStack_40 + -0x18;
            std::string::~string(psStack_40);
          }
          operator_delete(local_48);
        }
        _CFRelease(lVar7);
      }
      _CFRelease(lVar6);
    }
    _CFRelease(lVar5);
  }
  return param_1;
}

