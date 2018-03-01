extern crate assert_cli;

#[cfg(test)]
mod integration {
    use assert_cli;

    #[test]
    fn without_args() {
        assert_cli::Assert::main_binary()
            .stdout()
            .contains("Sorry, come again")
            .unwrap();
    }

    #[test]
    fn with_hello() {
        assert_cli::Assert::main_binary()
            .with_args(&["hello"])
            .stdout()
            .contains("Hello, world")
            .unwrap();
    }

    #[test]
    fn with_request_password() {
        assert_cli::Assert::main_binary()
            .with_args(&["request_password"])
            .stdin("set password\n")
            .stdout()
            .is("set password\n")
            .unwrap();
    }
}
