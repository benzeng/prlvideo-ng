
void _xmlParserValidityWarning(void *ctx,char *msg,...)

{
  byte in_AL;
  
                    /* WARNING: Could not recover jumptable at 0x000100872a6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_100872a8e + (ulong)in_AL * -4))(ctx,msg,&LAB_100872a8e + (ulong)in_AL * -4);
  return;
}

