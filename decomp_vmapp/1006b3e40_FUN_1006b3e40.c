
char * FUN_1006b3e40(char *param_1,uint param_2,char param_3)

{
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
  if (((param_2 & 0xfffffff) == 0) && (param_3 == '\x01')) {
    QString::sprintf(param_1,"%s #%d","Parallels Shared",0);
  }
  else {
    QString::sprintf(param_1,"%s #%d","Parallels Host-Only");
  }
  return param_1;
}

