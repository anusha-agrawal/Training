pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                // Check out your source code from the Git repository.
                checkout scm
            }
        }

        stage('Compile') {
            steps {
                // Compile the C file (replace 'your_c_file.c' with the actual filename).
                sh 'gcc print.c -o print'
            }
        }

        stage('Run') {
            steps {
                // Run the compiled C program (replace 'your_program' with the actual executable name).
                sh './print'
            }
        }
    }

    post {
        success {
            emailext to: 'anusha.agrawal@oracle.com', subject: 'Pipeline successful', body:'The jenkins pipeline ran successfully.'
        }
        failure {
            emailext to: 'anusha.agrawal@oracle.com', subject: 'Pipeline unsuccessful', body:'The jenkins pipeline did not run successfully.'
        }
    }
}
