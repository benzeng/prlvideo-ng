
undefined * FUN_0040f304(void)

{
  __uid_t __uid;
  passwd *ppVar1;
  undefined *local_20;
  
  if (DAT_0061db60 == '\0') {
    __uid = geteuid();
    ppVar1 = getpwuid(__uid);
    if ((ppVar1 == (passwd *)0x0) || (ppVar1->pw_dir == (char *)0x0)) {
      local_20 = &DAT_00418fdf;
    }
    else {
      snprintf(&DAT_0061db60,0x400,"%s/.parallels",ppVar1->pw_dir);
      DAT_0061df5f = 0;
      local_20 = &DAT_0061db60;
    }
  }
  else {
    local_20 = &DAT_0061db60;
  }
  return local_20;
}

