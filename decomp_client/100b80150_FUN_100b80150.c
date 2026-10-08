
undefined4 FUN_100b80150(long param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","Pd4License.cpp",
                  0x271,"GetEdition");
  }
  if (((*(int *)(param_1 + 0x18) != 8) || (*(int *)(param_1 + 0x1c) != 7)) ||
     (uVar1 = 3, *(int *)(param_1 + 0x38) != 1)) {
    uVar1 = *(undefined4 *)(param_1 + 0x38);
  }
  return uVar1;
}

