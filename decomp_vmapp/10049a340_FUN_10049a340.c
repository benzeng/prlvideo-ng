
char * FUN_10049a340(char *param_1,byte *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  char *local_58;
  char *pcStack_50;
  undefined8 local_38;
  
  if ((*param_2 & 1) == 0) {
    param_2 = param_2 + 1;
  }
  else {
    param_2 = *(byte **)(param_2 + 0x10);
  }
  lVar3 = _CFStringCreateWithCString
                    (*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,param_2,0x8000100);
  iVar2 = _LSGetApplicationForInfo(0,0,lVar3,0xffffffff,0,&local_38);
  if (iVar2 == 0) {
    lVar4 = _CFURLCopyFileSystemPath(local_38,0);
    _CFRelease(local_38);
    if (lVar4 != 0) {
      uVar5 = _CFStringGetLength(lVar4);
      local_58 = (char *)0x0;
      pcStack_50 = (char *)0x0;
      if (uVar5 + 1 != 0) {
        if ((long)uVar5 < -1) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        local_58 = operator_new(uVar5 + 1);
        uVar5 = ~uVar5;
        pcStack_50 = local_58;
        do {
          *pcStack_50 = '\0';
          pcStack_50 = pcStack_50 + 1;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0);
      }
      cVar1 = _CFStringGetCString(lVar4,local_58,(long)pcStack_50 - (long)local_58,0x8000100);
      if (cVar1 == '\0') {
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[8] = '\0';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        param_1[0xc] = '\0';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0] = '\0';
        param_1[1] = '\0';
        param_1[2] = '\0';
        param_1[3] = '\0';
        param_1[4] = '\0';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
      }
      else {
        _strlen(local_58);
        std::string::__init(param_1,(ulong)local_58);
      }
      if (local_58 != (char *)0x0) {
        operator_delete(local_58);
      }
      _CFRelease(lVar4);
      goto LAB_10049a4c0;
    }
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
LAB_10049a4c0:
  if (lVar3 != 0) {
    _CFRelease(lVar3);
  }
  return param_1;
}

