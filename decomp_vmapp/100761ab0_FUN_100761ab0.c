
undefined8 FUN_100761ab0(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 local_a0 [96];
  undefined8 local_40;
  
  iVar1 = _stat_INODE64(param_1,local_a0);
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","HostFile",0,"CHostFile::get_file_size(%s) failed: %s",param_1,pcVar3);
    local_40 = 0xffffffffffffffff;
  }
  return local_40;
}

