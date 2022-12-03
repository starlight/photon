/* Generated from core/parse.scm by the CHICKEN compiler
   http://www.call-cc.org
   Version 5.3.0 (rev e31bbee5)
   freebsd-unix-clang-x86-64 [ 64bit dload ptables ]
   command line: core/parse.scm -output-file parse.c -static -unit parse -emit-all-import-libraries -emit-link-file parse.link
   unit: parse
   uses: eval srfi-127 utf8-srfi-14 srfi-1 utf8 library
*/
#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d127_toplevel)
C_externimport void C_ccall C_srfi_2d127_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_2dsrfi_2d14_toplevel)
C_externimport void C_ccall C_utf8_2dsrfi_2d14_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_srfi_2d1_toplevel)
C_externimport void C_ccall C_srfi_2d1_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_utf8_toplevel)
C_externimport void C_ccall C_utf8_toplevel(C_word c,C_word *av) C_noret;
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word *av) C_noret;

static C_TLS C_word lf[15];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,13),40,102,95,50,57,57,32,105,110,112,117,116,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,28),40,112,104,111,116,111,110,46,112,97,114,115,101,35,114,101,115,117,108,116,37,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,49,32,105,110,112,117,116,41,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,20),40,112,104,111,116,111,110,46,112,97,114,115,101,35,122,101,114,111,37,41,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,13),40,102,95,51,49,54,32,105,110,112,117,116,41,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,20),40,112,104,111,116,111,110,46,112,97,114,115,101,35,105,116,101,109,37,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,13),40,102,95,51,52,54,32,105,110,112,117,116,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,36),40,112,104,111,116,111,110,46,112,97,114,115,101,35,98,105,110,100,37,32,112,97,114,115,101,114,32,102,117,110,99,116,105,111,110,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,12),40,97,52,48,57,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,12),40,97,51,57,48,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,36),40,112,104,111,116,111,110,46,112,97,114,115,101,35,115,101,113,42,32,112,97,114,115,101,114,32,46,32,112,97,114,115,101,114,115,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,12),40,97,52,50,57,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,35),40,112,104,111,116,111,110,46,112,97,114,115,101,35,105,115,42,32,112,114,101,100,105,99,97,116,101,32,46,32,97,114,103,115,41,0,0,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,12),40,97,52,53,48,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,39),40,112,104,111,116,111,110,46,112,97,114,115,101,35,105,115,45,110,111,116,42,32,112,114,101,100,105,99,97,116,101,32,46,32,97,114,103,115,41,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,12),40,97,52,54,54,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,25),40,112,104,111,116,111,110,46,112,97,114,115,101,35,101,113,118,42,32,99,111,110,115,116,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,12),40,97,52,55,56,32,118,97,108,117,101,41,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,27),40,112,104,111,116,111,110,46,112,97,114,115,101,35,105,110,42,32,99,104,97,114,45,115,101,116,41,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_280)
static void C_ccall f_280(C_word c,C_word *av) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283(C_word c,C_word *av) C_noret;
C_noret_decl(f_286)
static void C_ccall f_286(C_word c,C_word *av) C_noret;
C_noret_decl(f_289)
static void C_ccall f_289(C_word c,C_word *av) C_noret;
C_noret_decl(f_292)
static void C_ccall f_292(C_word c,C_word *av) C_noret;
C_noret_decl(f_295)
static void C_ccall f_295(C_word c,C_word *av) C_noret;
C_noret_decl(f_297)
static void C_ccall f_297(C_word c,C_word *av) C_noret;
C_noret_decl(f_299)
static void C_ccall f_299(C_word c,C_word *av) C_noret;
C_noret_decl(f_309)
static void C_ccall f_309(C_word c,C_word *av) C_noret;
C_noret_decl(f_311)
static void C_ccall f_311(C_word c,C_word *av) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word *av) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word *av) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word *av) C_noret;
C_noret_decl(f_338)
static void C_ccall f_338(C_word c,C_word *av) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word *av) C_noret;
C_noret_decl(f_346)
static void C_ccall f_346(C_word c,C_word *av) C_noret;
C_noret_decl(f_350)
static void C_ccall f_350(C_word c,C_word *av) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word *av) C_noret;
C_noret_decl(f_389)
static void C_ccall f_389(C_word c,C_word *av) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word *av) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408(C_word c,C_word *av) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word *av) C_noret;
C_noret_decl(f_420)
static void C_ccall f_420(C_word c,C_word *av) C_noret;
C_noret_decl(f_428)
static void C_ccall f_428(C_word c,C_word *av) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word *av) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word *av) C_noret;
C_noret_decl(f_445)
static void C_ccall f_445(C_word c,C_word *av) C_noret;
C_noret_decl(f_451)
static void C_ccall f_451(C_word c,C_word *av) C_noret;
C_noret_decl(f_459)
static void C_ccall f_459(C_word c,C_word *av) C_noret;
C_noret_decl(f_461)
static void C_ccall f_461(C_word c,C_word *av) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word *av) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word *av) C_noret;
C_noret_decl(f_479)
static void C_ccall f_479(C_word c,C_word *av) C_noret;
C_noret_decl(C_parse_toplevel)
C_externexport void C_ccall C_parse_toplevel(C_word c,C_word *av) C_noret;

/* k278 */
static void C_ccall f_280(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_280,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_283,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_eval_toplevel(2,av2);}}

/* k281 in k278 */
static void C_ccall f_283(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(19,c,2)))){
C_save_and_reclaim((void *)f_283,c,av);}
a=C_alloc(19);
t2=C_a_i_provide(&a,1,lf[0]);
t3=C_a_i_provide(&a,1,lf[1]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_286,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t4;
C_utf8_toplevel(2,av2);}}

/* k284 in k281 in k278 */
static void C_ccall f_286(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_286,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_289,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d1_toplevel(2,av2);}}

/* k287 in k284 in k281 in k278 */
static void C_ccall f_289(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_289,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_utf8_2dsrfi_2d14_toplevel(2,av2);}}

/* k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_292(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_292,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_295,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_srfi_2d127_toplevel(2,av2);}}

/* k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_295(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(27,c,4)))){
C_save_and_reclaim((void *)f_295,c,av);}
a=C_alloc(27);
t2=C_mutate((C_word*)lf[2]+1 /* (set! photon.parse#result% ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_297,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[3]+1 /* (set! photon.parse#zero% ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_309,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! photon.parse#item% ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_314,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! photon.parse#bind% ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_344,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! photon.parse#seq* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_381,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[10]+1 /* (set! photon.parse#is* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_420,a[2]=((C_word)li12),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[11]+1 /* (set! photon.parse#is-not* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_445,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[12]+1 /* (set! photon.parse#eqv* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_461,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[13]+1 /* (set! photon.parse#in* ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_473,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t11=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t11;
av2[1]=C_SCHEME_UNDEFINED;
((C_proc)(void*)(*((C_word*)t11+1)))(2,av2);}}

/* photon.parse#result% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_297(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_297,c,av);}
a=C_alloc(4);
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_299,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* f_299 in photon.parse#result% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_299(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_299,c,av);}
a=C_alloc(6);
t3=C_a_i_cons(&a,2,((C_word*)t0)[2],t2);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_a_i_list1(&a,1,t3);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* photon.parse#zero% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_309(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_309,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_311,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_311 in photon.parse#zero% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_311(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_311,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* photon.parse#item% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_314(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_314,c,av);}
a=C_alloc(3);
t2=t1;{
C_word *av2=av;
av2[0]=t2;
av2[1]=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* f_316 in photon.parse#item% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_316(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_316,c,av);}
a=C_alloc(4);
t3=C_i_nullp(t2);
if(C_truep(C_i_not(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_334,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:31: srfi-127#lseq-first"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[6]);
C_word *av2=av;
av2[0]=*((C_word*)lf[6]+1);
av2[1]=t4;
av2[2]=t2;
tp(3,av2);}}
else{
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}}

/* k332 */
static void C_ccall f_334(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,2)))){
C_save_and_reclaim((void *)f_334,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_338,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:31: srfi-127#lseq-rest"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[5]);
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[5]+1);
av2[1]=t2;
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}

/* k336 in k332 */
static void C_ccall f_338(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(6,c,1)))){
C_save_and_reclaim((void *)f_338,c,av);}
a=C_alloc(6);
t2=C_a_i_cons(&a,2,((C_word*)t0)[2],t1);
t3=((C_word*)t0)[3];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_a_i_list1(&a,1,t2);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* photon.parse#bind% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_344(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3=av[3];
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_344,c,av);}
a=C_alloc(4);
t4=t1;{
C_word *av2=av;
av2[0]=t4;
av2[1]=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_346,a[2]=t2,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}

/* f_346 in photon.parse#bind% in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_346(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_346,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_350,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/parse.scm:35: parser"));
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=t3;
av2[2]=t2;
((C_proc)C_fast_retrieve_proc(t4))(3,av2);}}

/* k348 */
static void C_ccall f_350(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_350,c,av);}
if(C_truep(t1)){
t2=lf[8];
if(C_truep(t2)){
t3=C_i_nullp(t2);
t4=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t4;
av2[1]=(C_truep(t3)?t2:C_SCHEME_FALSE);
((C_proc)(void*)(*((C_word*)t4+1)))(2,av2);}}
else{
t3=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}}
else{
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_SCHEME_FALSE;
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}}

/* photon.parse#seq* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_381(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +4,c,2)))){
C_save_and_reclaim((void*)f_381,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+4);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_389,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:54: parser"));
t5=t2;{
C_word *av2=av;
av2[0]=t5;
av2[1]=t4;
((C_proc)C_fast_retrieve_proc(t5))(2,av2);}}

/* k387 in photon.parse#seq* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_389(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_389,c,av);}
a=C_alloc(4);
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_391,a[2]=((C_word*)t0)[2],a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:53: bind%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[3];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a390 in k387 in photon.parse#seq* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_391(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_391,c,av);}
a=C_alloc(3);
if(C_truep(C_i_nullp(((C_word*)t0)[2]))){
C_trace(C_text("core/parse.scm:57: result%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t1;
av2[2]=t2;
tp(3,av2);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_408,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=0;
av2[1]=t3;
av2[2]=*((C_word*)lf[9]+1);
av2[3]=((C_word*)t0)[2];
C_apply(4,av2);}}}

/* k406 in a390 in k387 in photon.parse#seq* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_408(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,3)))){
C_save_and_reclaim((void *)f_408,c,av);}
a=C_alloc(3);
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_410,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp);
C_trace(C_text("core/parse.scm:58: bind%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a409 in k406 in a390 in k387 in photon.parse#seq* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_410(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void *)f_410,c,av);}
a=C_alloc(3);
t3=C_a_i_cons(&a,2,t2,t2);
C_trace(C_text("core/parse.scm:61: result%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[2]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* photon.parse#is* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_420(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,2)))){
C_save_and_reclaim((void*)f_420,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_428,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("core/parse.scm:65: item%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[4]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[4]+1);
av2[1]=t4;
tp(2,av2);}}

/* k426 in photon.parse#is* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_428(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(5,c,3)))){
C_save_and_reclaim((void *)f_428,c,av);}
a=C_alloc(5);
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word)li11),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("core/parse.scm:64: bind%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[7]+1));
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[7]+1);
av2[1]=((C_word*)t0)[4];
av2[2]=t1;
av2[3]=t2;
tp(4,av2);}}

/* a429 in k426 in photon.parse#is* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_430(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,4)))){
C_save_and_reclaim((void *)f_430,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_437,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
C_apply(5,av2);}}

/* k435 in a429 in k426 in photon.parse#is* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_437(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,2)))){
C_save_and_reclaim((void *)f_437,c,av);}
if(C_truep(t1)){
C_trace(C_text("core/parse.scm:68: result%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[2]+1));
C_word *av2;
if(c >= 3) {
  av2=av;
} else {
  av2=C_alloc(3);
}
av2[0]=*((C_word*)lf[2]+1);
av2[1]=((C_word*)t0)[2];
av2[2]=((C_word*)t0)[3];
tp(3,av2);}}
else{
C_trace(C_text("core/parse.scm:69: zero%"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[3]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[3]+1);
av2[1]=((C_word*)t0)[2];
tp(2,av2);}}}

/* photon.parse#is-not* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_445(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand((c-3)*C_SIZEOF_PAIR +5,c,3)))){
C_save_and_reclaim((void*)f_445,c,av);}
a=C_alloc((c-3)*C_SIZEOF_PAIR+5);
t3=C_build_rest(&a,c,3,av);
C_word t4;
C_word t5;
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_451,a[2]=t2,a[3]=t3,a[4]=((C_word)li13),tmp=(C_word)a,a+=5,tmp);
C_trace(C_text("core/parse.scm:72: is*"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t1;
av2[2]=t4;
tp(3,av2);}}

/* a450 in photon.parse#is-not* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_451(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(3,c,4)))){
C_save_and_reclaim((void *)f_451,c,av);}
a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_459,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2;
if(c >= 5) {
  av2=av;
} else {
  av2=C_alloc(5);
}
av2[0]=0;
av2[1]=t3;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
av2[4]=((C_word*)t0)[3];
C_apply(5,av2);}}

/* k457 in a450 in photon.parse#is-not* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_459(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word *a;
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_459,c,av);}
t2=((C_word*)t0)[2];{
C_word *av2=av;
av2[0]=t2;
av2[1]=C_i_not(t1);
((C_proc)(void*)(*((C_word*)t2+1)))(2,av2);}}

/* photon.parse#eqv* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_461(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_461,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_467,a[2]=t2,a[3]=((C_word)li15),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:77: is*"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a466 in photon.parse#eqv* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_467(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,1)))){
C_save_and_reclaim((void *)f_467,c,av);}
t3=t1;{
C_word *av2=av;
av2[0]=t3;
av2[1]=C_i_eqvp(t2,((C_word*)t0)[2]);
((C_proc)(void*)(*((C_word*)t3+1)))(2,av2);}}

/* photon.parse#in* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_473(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(4,c,3)))){
C_save_and_reclaim((void *)f_473,c,av);}
a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_479,a[2]=t2,a[3]=((C_word)li17),tmp=(C_word)a,a+=4,tmp);
C_trace(C_text("core/parse.scm:82: is*"));
{C_proc tp=(C_proc)C_fast_retrieve_proc(*((C_word*)lf[10]+1));
C_word *av2=av;
av2[0]=*((C_word*)lf[10]+1);
av2[1]=t1;
av2[2]=t3;
tp(3,av2);}}

/* a478 in photon.parse#in* in k293 in k290 in k287 in k284 in k281 in k278 */
static void C_ccall f_479(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2=av[2];
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(C_unlikely(!C_demand(C_calculate_demand(0,c,3)))){
C_save_and_reclaim((void *)f_479,c,av);}
C_trace(C_text("core/parse.scm:84: utf8-srfi-14#char-set-contains?"));
{C_proc tp=(C_proc)C_fast_retrieve_symbol_proc(lf[14]);
C_word *av2;
if(c >= 4) {
  av2=av;
} else {
  av2=C_alloc(4);
}
av2[0]=*((C_word*)lf[14]+1);
av2[1]=t1;
av2[2]=((C_word*)t0)[2];
av2[3]=t2;
tp(4,av2);}}

/* toplevel */
static C_TLS int toplevel_initialized=0;

void C_ccall C_parse_toplevel(C_word c,C_word *av){
C_word tmp;
C_word t0=av[0];
C_word t1=av[1];
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) {C_kontinue(t1,C_SCHEME_UNDEFINED);}
else C_toplevel_entry(C_text("parse"));
C_check_nursery_minimum(C_calculate_demand(3,c,2));
if(C_unlikely(!C_demand(C_calculate_demand(3,c,2)))){
C_save_and_reclaim((void*)C_parse_toplevel,c,av);}
toplevel_initialized=1;
if(C_unlikely(!C_demand_2(206))){
C_save(t1);
C_rereclaim2(206*sizeof(C_word),1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,15);
lf[0]=C_h_intern(&lf[0],5, C_text("parse"));
lf[1]=C_h_intern(&lf[1],13, C_text("photon.parse#"));
lf[2]=C_h_intern(&lf[2],20, C_text("photon.parse#result%"));
lf[3]=C_h_intern(&lf[3],18, C_text("photon.parse#zero%"));
lf[4]=C_h_intern(&lf[4],18, C_text("photon.parse#item%"));
lf[5]=C_h_intern(&lf[5],18, C_text("srfi-127#lseq-rest"));
lf[6]=C_h_intern(&lf[6],19, C_text("srfi-127#lseq-first"));
lf[7]=C_h_intern(&lf[7],18, C_text("photon.parse#bind%"));
lf[8]=C_decode_literal(C_heaptop,C_text("\376\003\000\000\002\376\001\000\000\012\001filter-map\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001lambda\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006\001result\376\377\016\376\003\000\000\002\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\010\001function\376\003\000\000\002\376\003\000\000\002\376\001\000\000\012\001lseq-first\376\003\000\000\002\376\001\000\000\006\001result\376\377\016\376\377\016\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\011\001lseq-rest\376\003\000\000\002\376\001\000\000\006\001result\376\377\016\376\377\016\376\377\016\376\003\000\000\002\376\001\000\000\007\001results\376\377\016"));
lf[9]=C_h_intern(&lf[9],17, C_text("photon.parse#seq\052"));
lf[10]=C_h_intern(&lf[10],16, C_text("photon.parse#is\052"));
lf[11]=C_h_intern(&lf[11],20, C_text("photon.parse#is-not\052"));
lf[12]=C_h_intern(&lf[12],17, C_text("photon.parse#eqv\052"));
lf[13]=C_h_intern(&lf[13],16, C_text("photon.parse#in\052"));
lf[14]=C_h_intern(&lf[14],31, C_text("utf8-srfi-14#char-set-contains\077"));
C_register_lf2(lf,15,create_ptable());{}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_280,a[2]=t1,tmp=(C_word)a,a+=3,tmp);{
C_word *av2=av;
av2[0]=C_SCHEME_UNDEFINED;
av2[1]=t2;
C_library_toplevel(2,av2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[35] = {
{C_text("f_280:core_2fparse_2escm"),(void*)f_280},
{C_text("f_283:core_2fparse_2escm"),(void*)f_283},
{C_text("f_286:core_2fparse_2escm"),(void*)f_286},
{C_text("f_289:core_2fparse_2escm"),(void*)f_289},
{C_text("f_292:core_2fparse_2escm"),(void*)f_292},
{C_text("f_295:core_2fparse_2escm"),(void*)f_295},
{C_text("f_297:core_2fparse_2escm"),(void*)f_297},
{C_text("f_299:core_2fparse_2escm"),(void*)f_299},
{C_text("f_309:core_2fparse_2escm"),(void*)f_309},
{C_text("f_311:core_2fparse_2escm"),(void*)f_311},
{C_text("f_314:core_2fparse_2escm"),(void*)f_314},
{C_text("f_316:core_2fparse_2escm"),(void*)f_316},
{C_text("f_334:core_2fparse_2escm"),(void*)f_334},
{C_text("f_338:core_2fparse_2escm"),(void*)f_338},
{C_text("f_344:core_2fparse_2escm"),(void*)f_344},
{C_text("f_346:core_2fparse_2escm"),(void*)f_346},
{C_text("f_350:core_2fparse_2escm"),(void*)f_350},
{C_text("f_381:core_2fparse_2escm"),(void*)f_381},
{C_text("f_389:core_2fparse_2escm"),(void*)f_389},
{C_text("f_391:core_2fparse_2escm"),(void*)f_391},
{C_text("f_408:core_2fparse_2escm"),(void*)f_408},
{C_text("f_410:core_2fparse_2escm"),(void*)f_410},
{C_text("f_420:core_2fparse_2escm"),(void*)f_420},
{C_text("f_428:core_2fparse_2escm"),(void*)f_428},
{C_text("f_430:core_2fparse_2escm"),(void*)f_430},
{C_text("f_437:core_2fparse_2escm"),(void*)f_437},
{C_text("f_445:core_2fparse_2escm"),(void*)f_445},
{C_text("f_451:core_2fparse_2escm"),(void*)f_451},
{C_text("f_459:core_2fparse_2escm"),(void*)f_459},
{C_text("f_461:core_2fparse_2escm"),(void*)f_461},
{C_text("f_467:core_2fparse_2escm"),(void*)f_467},
{C_text("f_473:core_2fparse_2escm"),(void*)f_473},
{C_text("f_479:core_2fparse_2escm"),(void*)f_479},
{C_text("toplevel:core_2fparse_2escm"),(void*)C_parse_toplevel},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|hiding unexported module binding: photon.parse#plus% 
o|safe globals: (photon.parse#in* photon.parse#eqv* photon.parse#is-not* photon.parse#is* photon.parse#seq* photon.parse#plus% photon.parse#bind% photon.parse#item% photon.parse#zero% photon.parse#result%) 
o|removed side-effect free assignment to unused variable: photon.parse#plus% 
o|replaced variables: 39 
o|removed binding forms: 18 
o|removed binding forms: 34 
o|simplifications: ((if . 1) (##core#call . 14)) 
o|  call simplifications:
o|    scheme#eqv?
o|    scheme#apply	3
o|    scheme#null?	3
o|    scheme#not	2
o|    scheme#cons	3
o|    scheme#list	2
o|contracted procedure: k305 
o|contracted procedure: k340 
o|contracted procedure: k321 
o|contracted procedure: k328 
o|contracted procedure: k357 
o|contracted procedure: k396 
o|contracted procedure: k416 
o|simplifications: ((let . 2)) 
o|removed binding forms: 7 
*/
/* end of file */
