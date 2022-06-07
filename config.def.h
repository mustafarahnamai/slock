/* user and group to drop privileges to */
static const char *user  = "rahnamai";
static const char *group = "video";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#282828",     /* after initialization */
	[INPUT] =  "#83a598",   /* during input */
	[FAILED] = "#ae6962",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
